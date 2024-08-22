// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUIREMOTEIMAGEREPRESENTATION_H
#define AFUIREMOTEIMAGEREPRESENTATION_H

@class NSString, UIImage, NSURL, NSArray;
@protocol NSItemProviderWriting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFUIRemoteImageRepresentation : NSObject <NSItemProviderWriting>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


-(id)initWithImageURL:(id)arg0 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)_commonInit;


@end


#endif