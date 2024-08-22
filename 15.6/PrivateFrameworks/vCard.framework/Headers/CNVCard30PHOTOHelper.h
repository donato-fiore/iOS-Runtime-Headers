// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARD30PHOTOHELPER_H
#define CNVCARD30PHOTOHELPER_H

@protocol CNVCardPerson;

#import <Foundation/Foundation.h>

#import "CNVCardWritingOptions.h"

@interface CNVCard30PHOTOHelper : NSObject

@property (readonly, nonatomic) NSUInteger maxBytes; // ivar: _maxBytes
@property (readonly, nonatomic) CNVCardWritingOptions *options; // ivar: _options
@property (readonly, nonatomic) NSObject<CNVCardPerson> *person; // ivar: _person


+(id)log;
-(id)bestEffortImage;
-(id)compressImage:(id)arg0 allowableCompressions:(id)arg1 ;
-(id)description;
-(id)image;
-(id)init;
-(id)initWithPerson:(id)arg0 options:(id)arg1 maximumDataLength:(NSUInteger)arg2 ;
-(id)largeImage;
-(id)scaleImage:(id)arg0 toFit:(struct CGSize )arg1 allowableCompressionQuality:(id)arg2 ;
-(id)scaleImage:(id)arg0 toFitSizes:(id)arg1 allowableCompressionQuality:(id)arg2 ;
-(void)logBestEfforImageIfNonNil:(id)arg0 ;


@end


#endif