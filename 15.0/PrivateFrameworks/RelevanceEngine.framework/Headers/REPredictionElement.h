// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REPREDICTIONELEMENT_H
#define REPREDICTIONELEMENT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REPredictionElement : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSUInteger privacyBehavior; // ivar: _privacyBehavior
@property (readonly, nonatomic) NSArray *relevanceProviders; // ivar: _relevanceProviders
@property (retain, nonatomic) NSString *section; // ivar: _section


+(BOOL)supportsSecureCoding;
+(id)predictionElementFromElement:(id)arg0 ;
+(id)predictionElementWithIdentifier:(id)arg0 relevanceProviders:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif