// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKINBOXCELLDATA_H
#define CKINBOXCELLDATA_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface CKInboxCellData : NSObject {
    ? title;
}


@property (nonatomic, readonly) NSUInteger filterMode; // ivar: filterMode
@property (nonatomic, readonly) UIImage *image; // ivar: image
@property (nonatomic, readonly) NSString *title;


-(id)init;
-(id)initWithImage:(id)arg0 title:(id)arg1 filterMode:(NSUInteger)arg2 ;


@end


#endif