// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPLINKMETADATASTATUSTRANSFORMER_H
#define LPLINKMETADATASTATUSTRANSFORMER_H

@class NSURL, NSAttributedString;
@protocol LPLinkMetadataStatusTransformerDelegate;

#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"

@interface LPLinkMetadataStatusTransformer : NSObject {
    NSURL *_URL;
}


@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSURL *canonicalURL;
@property (weak, nonatomic) NSObject<LPLinkMetadataStatusTransformerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSAttributedString *statusText;
@property (readonly, nonatomic) BOOL wantsStatusItem; // ivar: _wantsStatusItem


-(id)initWithMetadata:(id)arg0 URL:(id)arg1 ;
-(id)originalURL;
-(void)dealloc;


@end


#endif