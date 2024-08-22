// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSHAREACCEPTATIONFAULT_H
#define BRCSHAREACCEPTATIONFAULT_H



#import "BRCDocumentItem.h"

@interface BRCShareAcceptationFault : BRCDocumentItem



-(BOOL)isShareAcceptationFault;
-(id)asShareAcceptationFault;
-(id)initWithFilename:(id)arg0 itemID:(id)arg1 appLibrary:(id)arg2 clientZone:(id)arg3 sharingOptions:(NSUInteger)arg4 ;
-(void)deleteShareAcceptationFault;
-(void)markLiveFromStageAsShareAcceptationFault;
-(void)stageShareAcceptationFaultWithName:(id)arg0 ;


@end


#endif