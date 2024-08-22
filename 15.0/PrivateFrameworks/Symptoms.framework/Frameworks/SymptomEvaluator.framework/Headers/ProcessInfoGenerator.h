// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROCESSINFOGENERATOR_H
#define PROCESSINFOGENERATOR_H

@class NSString;
@protocol ConfigurableObjectProtocol, AdditionalInfoProtocol;

#import <Foundation/Foundation.h>


@interface ProcessInfoGenerator : NSObject <ConfigurableObjectProtocol, AdditionalInfoProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)generateAdditionalInfo:(id)arg0 ;
+(id)sharedInstance;
-(id)generateAdditionalInfo:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;


@end


#endif