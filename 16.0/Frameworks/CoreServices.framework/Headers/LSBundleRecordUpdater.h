// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSBUNDLERECORDUPDATER_H
#define LSBUNDLERECORDUPDATER_H



#import "LSRecordBuilder.h"

@interface LSBundleRecordUpdater : LSRecordBuilder {
    LSContext _context;
    BOOL _hasContext;
    unsigned int _bundleID;
    LSBundleData _bundleData;
}




-(BOOL)checkNeedsUpdateForiTunesMetadata:(id)arg0 SINFo:(id)arg1 placeholderMetadata:(id)arg2 ;
-(BOOL)parsePersonas:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateBundleRecord:(*id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 preferPlaceholder:(BOOL)arg1 ;
-(id)initWithDatabase:(id)arg0 bundleUnit:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 ;
-(void)dealloc;
-(void)parsePlaceholderMetadata:(id)arg0 ;
-(void)parseSINFDictionary:(id)arg0 ;
-(void)parseiTunesMetadata:(id)arg0 ;


@end


#endif