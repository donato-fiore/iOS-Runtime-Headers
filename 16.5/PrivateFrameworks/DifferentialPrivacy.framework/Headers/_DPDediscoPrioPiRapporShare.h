// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPDEDISCOPRIOPIRAPPORSHARE_H
#define _DPDEDISCOPRIOPIRAPPORSHARE_H


#import <Foundation/Foundation.h>


@interface _DPDediscoPrioPiRapporShare : NSObject {
    ? prioShare;
    ? numberOfEncodedIndices;
    ? piRapporOtherPhi;
}




-(NSUInteger)getNumberOfEncodedIndices;
-(id)getPiRapporOtherPhi;
-(id)getPrioShare;
-(id)init;
-(id)initWithPrioShare:(id)arg0 numberOfEncodedIndices:(NSUInteger)arg1 piRapporOtherPhi:(id)arg2 ;
-(id)initWithSerializedData:(id)arg0 error:(*id)arg1 ;
-(id)serializeAndReturnError:(*id)arg0 ;


@end


#endif