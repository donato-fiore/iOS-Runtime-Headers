// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKTEXTMANIPULATIONITEM_H
#define _WKTEXTMANIPULATIONITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _WKTextManipulationItem : NSObject {
    RetainPtr<NSString> _identifier;
    RetainPtr<NSArray<_WKTextManipulationToken *>> _tokens;
}


@property (readonly, copy, nonatomic) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *tokens;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextManipulationItem:(id)arg0 includingContentEquality:(BOOL)arg1 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 tokens:(id)arg1 ;


@end


#endif