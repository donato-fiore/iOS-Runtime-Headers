// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKTEXTMANIPULATIONTOKEN_H
#define _WKTEXTMANIPULATIONTOKEN_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _WKTextManipulationToken : NSObject {
    RetainPtr<NSDictionary<NSString *,id>> _userInfo;
}


@property (copy, nonatomic) NSString *content; // ivar: _content
@property (readonly, copy, nonatomic) NSString *debugDescription;
@property (nonatomic, getter=isExcluded) BOOL excluded; // ivar: _excluded
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *userInfo;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextManipulationToken:(id)arg0 includingContentEquality:(BOOL)arg1 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif