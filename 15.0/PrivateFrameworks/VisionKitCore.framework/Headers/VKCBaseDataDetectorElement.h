// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCBASEDATADETECTORELEMENT_H
#define VKCBASEDATADETECTORELEMENT_H

@class NSArray, UIMenu, DDScannerResult, NSString, NSUUID;
@protocol VKAnalysisElementDebugMenuProvider;


#import "VKCBaseElement.h"

@interface VKCBaseDataDetectorElement : VKCBaseElement <VKAnalysisElementDebugMenuProvider>



@property (readonly, nonatomic) NSArray *boundingQuads;
@property (readonly, nonatomic) NSUInteger dataDetectorTypes;
@property (readonly, nonatomic) UIMenu *debugMenu;
@property (readonly, nonatomic) BOOL isMRCDataDetector;
@property (readonly, nonatomic) BOOL isTextDataDetector;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) BOOL wantsMacOSHandCursor;


+(NSUInteger)dataDetectorTypesForScannerResult:(id)arg0 ;
+(id)stringArrayForVKDataDetectorTypes:(NSUInteger)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isInspectableCellSelectable;
-(NSInteger)elementType;


@end


#endif