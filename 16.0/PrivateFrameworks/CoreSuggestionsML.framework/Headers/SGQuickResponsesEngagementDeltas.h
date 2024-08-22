// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESENGAGEMENTDELTAS_H
#define SGQUICKRESPONSESENGAGEMENTDELTAS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesEngagementDeltas : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int displayed; // ivar: _displayed
@property (readonly, nonatomic) NSString *lang; // ivar: _lang
@property (readonly, nonatomic) int matched; // ivar: _matched
@property (readonly, nonatomic) NSString *response; // ivar: _response
@property (readonly, nonatomic) int selected; // ivar: _selected


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuickResponsesEngagementDeltas:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLangResponse:(id)arg0 displayed:(int)arg1 selected:(int)arg2 matched:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif