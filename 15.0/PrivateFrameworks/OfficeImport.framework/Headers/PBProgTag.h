// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBPROGTAG_H
#define PBPROGTAG_H


#import <Foundation/Foundation.h>


@interface PBProgTag : NSObject



+(id)binaryTagDataWithName:(*unsigned short)arg0 inProgTags:(id)arg1 ;
+(id)binaryTagDataWithName:(*unsigned short)arg0 inProgTagsParent:(id)arg1 ;
+(id)ensureBinaryTagDataWithName:(*unsigned short)arg0 inProgTags:(id)arg1 ;
+(id)ensureBinaryTagDataWithName:(*unsigned short)arg0 inProgTagsParent:(id)arg1 ;
+(id)readBulletStyleFromClientData:(id)arg0 ;
+(id)readMacCharStyleFromClientData:(id)arg0 ;
+(struct PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(*unsigned short)arg0 ;
+(void)readBulletImagesFromContainerParent:(id)arg0 state:(id)arg1 ;
+(void)readBulletImagesFromDocumentList:(id)arg0 state:(id)arg1 ;
+(void)readBulletStylesFromDocumentList:(id)arg0 state:(id)arg1 ;
+(void)readBulletStylesFromMainMaster:(id)arg0 state:(id)arg1 ;
+(void)readClientData:(id)arg0 state:(id)arg1 ;
+(void)readDocumentList:(id)arg0 state:(id)arg1 ;
+(void)readHyperlinkScreenTipsFromDocumentList:(id)arg0 state:(id)arg1 ;
+(void)readMacCharStylesFromDocumentList:(id)arg0 state:(id)arg1 ;


@end


#endif