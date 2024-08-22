// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSEDITORIALITEM_H
#define TSEDITORIALITEM_H

@class NSURL, NSArray, NSString, UIImage;
@protocol FCTagProviding, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface TSEditorialItem : NSObject {
    ? identifier;
    ? title;
    ? subtitle;
    ? subtitleColor;
    ? attributes;
    ? actionURL;
}


@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, retain) NSObject<FCTagProviding> *backingTag; // ivar: backingTag
@property (nonatomic, retain) NSObject<FCHeadlineProviding> *headline; // ivar: headline
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleColor;
@property (nonatomic, retain) UIImage *thumbnailImage; // ivar: thumbnailImage
@property (nonatomic, copy) NSString *title;


-(id)init;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 subtitleColor:(id)arg3 attributes:(id)arg4 actionURL:(id)arg5 thumbnailImage:(id)arg6 backingTag:(id)arg7 headline:(id)arg8 ;


@end


#endif