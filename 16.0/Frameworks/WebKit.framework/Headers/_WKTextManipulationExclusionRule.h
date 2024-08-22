// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKTEXTMANIPULATIONEXCLUSIONRULE_H
#define _WKTEXTMANIPULATIONEXCLUSIONRULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _WKTextManipulationExclusionRule : NSObject {
    RetainPtr<NSString> _elementName;
    RetainPtr<NSString> _attributeName;
    RetainPtr<NSString> _attributeValue;
    RetainPtr<NSString> _className;
}


@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, nonatomic) NSString *attributeValue;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) BOOL isExclusion; // ivar: _isExclusion


-(id)initExclusion:(BOOL)arg0 forAttribute:(id)arg1 value:(id)arg2 ;
-(id)initExclusion:(BOOL)arg0 forClass:(id)arg1 ;
-(id)initExclusion:(BOOL)arg0 forElement:(id)arg1 ;


@end


#endif