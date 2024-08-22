// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDROPPROPOSAL_H
#define UIDROPPROPOSAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIDropProposal : NSObject <NSCopying>



@property (nonatomic) NSUInteger operation; // ivar: _operation
@property (nonatomic, getter=isPrecise) BOOL precise; // ivar: _precise
@property (nonatomic, getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:) NSInteger preferredBadgeStyle; // ivar: _preferredBadgeStyle
@property (nonatomic) BOOL prefersFullSizePreview; // ivar: _prefersFullSizePreview


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDropOperation:(NSUInteger)arg0 ;


@end


#endif