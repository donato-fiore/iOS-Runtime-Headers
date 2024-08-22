// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FCACTIVITYLIFETIME_H
#define _FCACTIVITYLIFETIME_H

@class NSString, DNDLifetimeDetails;
@protocol FCActivityLifetimeDescribing;

#import <Foundation/Foundation.h>


@interface _FCActivityLifetime : NSObject <FCActivityLifetimeDescribing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic, getter=_dndLifetimeDetails) DNDLifetimeDetails *dndLifetimeDetails; // ivar: _dndLifetimeDetails
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lifetimeIdentifier;
@property (readonly, copy, nonatomic) NSString *lifetimeMetadata;
@property (readonly, copy, nonatomic) NSString *lifetimeName;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLifetimeDetails:(id)arg0 ;


@end


#endif