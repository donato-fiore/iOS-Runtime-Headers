// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRANISETTEDATAPROVIDER_H
#define TRANISETTEDATAPROVIDER_H

@class NSString;
@protocol AKAnisetteServiceProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "TRSession.h"

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TRSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)eraseAnisetteWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionAnisetteWithCompletion:(id)arg0 ;
-(void)syncAnisetteWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif