// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGMESSAGEEXTENSIONOPENGRAPHMESSAGE_H
#define PKSHARINGMESSAGEEXTENSIONOPENGRAPHMESSAGE_H

@class NSURL, NSString, UIImage;
@protocol PKSharingMessageExtensionMessage;

#import <Foundation/Foundation.h>


@interface PKSharingMessageExtensionOpenGraphMessage : NSObject <PKSharingMessageExtensionMessage>

 {
    NSURL *_url;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFetchedOpenGraphPreview; // ivar: _hasFetchedOpenGraphPreview
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isPending; // ivar: _isPending
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)urlRepresentation;


@end


#endif