// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDTEXTURERAWRENDITIONSPEC_H
#define TDTEXTURERAWRENDITIONSPEC_H



#import "TDTextureImageRenditionSpec.h"

@interface TDTextureRawRenditionSpec : TDTextureImageRenditionSpec



+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)textureWithDocument:(id)arg0 ;


@end


#endif