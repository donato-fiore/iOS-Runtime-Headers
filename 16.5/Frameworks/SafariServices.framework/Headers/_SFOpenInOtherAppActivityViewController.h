// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFOPENINOTHERAPPACTIVITYVIEWCONTROLLER_H
#define _SFOPENINOTHERAPPACTIVITYVIEWCONTROLLER_H

@class SFActivityViewController, NSString;



@interface _SFOpenInOtherAppActivityViewController : SFActivityViewController

@property (retain, nonatomic) NSString *filePath; // ivar: _filePath


+(BOOL)canOpenWithFilePath:(id)arg0 UTI:(id)arg1 sourceURL:(id)arg2 ;
+(id)_activityItemsForFilePath:(id)arg0 UTI:(id)arg1 sourceURL:(id)arg2 ;
+(id)_applicationsForDocumentProxy:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 UTI:(id)arg1 sourceURL:(id)arg2 ;
-(void)_prepareActivity:(id)arg0 ;


@end


#endif