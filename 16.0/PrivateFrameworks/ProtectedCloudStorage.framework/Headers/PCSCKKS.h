// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSCKKS_H
#define PCSCKKS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PCSCKKS : NSObject

@property (retain) NSString *dsid; // ivar: _dsid
@property *_PCSIdentitySetData set; // ivar: _set


+(BOOL)fetchWithTimeout:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)shouldRetryWithSync:(id)arg0 ;
-(id)createIdentityOperation:(id)arg0 ;
-(id)ensurePCSFieldsOperation:(id)arg0 ;
-(id)fetchCurrentOperation:(id)arg0 ;
-(id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg0 dsid:(id)arg1 ;
-(id)stripOperationErrorIfPCSError:(id)arg0 ;
-(id)syncViewOperation:(id)arg0 ;
-(void)createIdentity:(id)arg0 complete:(id)arg1 ;
-(void)createNewIdentity:(id)arg0 roll:(BOOL)arg1 sync:(BOOL)arg2 complete:(id)arg3 ;
-(void)dealloc;
-(void)submitRequest:(id)arg0 complete:(id)arg1 ;


@end


#endif