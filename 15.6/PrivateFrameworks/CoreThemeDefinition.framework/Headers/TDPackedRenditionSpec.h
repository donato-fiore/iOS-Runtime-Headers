// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDPACKEDRENDITIONSPEC_H
#define TDPACKEDRENDITIONSPEC_H



#import "TDRenditionSpec.h"
#import "TDThemeCompressionType.h"

@interface TDPackedRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDThemeCompressionType *compressionType;


-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)renditionPackName;


@end


#endif