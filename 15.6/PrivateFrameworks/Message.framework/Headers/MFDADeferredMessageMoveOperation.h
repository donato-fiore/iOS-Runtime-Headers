// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDADEFERREDMESSAGEMOVEOPERATION_H
#define MFDADEFERREDMESSAGEMOVEOPERATION_H

@class MFOfflineCacheOperation, NSArray, NSString;



@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation {
    NSArray *_sourceRemoteIDs;
    NSArray *_originalFlags;
    NSArray *_temporaryRemoteIDs;
    NSString *_sourceMailboxID;
    NSString *_destinationMailboxID;
}




+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif