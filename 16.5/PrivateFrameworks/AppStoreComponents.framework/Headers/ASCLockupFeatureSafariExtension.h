// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPFEATURESAFARIEXTENSION_H
#define ASCLOCKUPFEATURESAFARIEXTENSION_H

@class NSString;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>


@interface ASCLockupFeatureSafariExtension : NSObject <ASCLockupFeature>



@property (readonly, copy, nonatomic) NSString *contentProviderTeamID; // ivar: _contentProviderTeamID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentProviderTeamID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif