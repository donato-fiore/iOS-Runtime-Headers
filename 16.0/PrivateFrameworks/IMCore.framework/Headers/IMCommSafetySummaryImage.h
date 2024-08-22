// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOMMSAFETYSUMMARYIMAGE_H
#define IMCOMMSAFETYSUMMARYIMAGE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface IMCommSafetySummaryImage : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData


-(id)initWithIdentifier:(id)arg0 imageData:(id)arg1 ;


@end


#endif