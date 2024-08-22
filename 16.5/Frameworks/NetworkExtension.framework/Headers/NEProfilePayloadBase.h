// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPROFILEPAYLOADBASE_H
#define NEPROFILEPAYLOADBASE_H

@class NSDictionary, NSMutableDictionary;
@protocol NEProfilePayloadBaseDelegate;

#import <Foundation/Foundation.h>


@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>



@property (retain, nonatomic) NSDictionary *payloadAtom; // ivar: _payloadAtom
@property (retain) NSMutableDictionary *pendingCertificates; // ivar: _pendingCertificates
@property (retain) NSDictionary *pluginUpgradeInfo; // ivar: _pluginUpgradeInfo


-(BOOL)addCertificatePending:(id)arg0 certificateTag:(id)arg1 ;
-(BOOL)addCertificatePending:(id)arg0 certificateTag:(id)arg1 accessGroup:(id)arg2 ;
-(BOOL)setPostprocessedPayloadContents:(id)arg0 ;
-(id)getPreprocessedPayloadContents;
-(id)initWithPayload:(id)arg0 ;
-(id)validatePayload;


@end


#endif