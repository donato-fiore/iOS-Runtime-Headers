// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSBUNDLERECORDUPDATER_H
#define LSBUNDLERECORDUPDATER_H

@class NSString;


#import "LSRecordBuilder.h"

@interface LSBundleRecordUpdater : LSRecordBuilder {
    LSContext _context;
    BOOL _hasContext;
    unsigned int _bundleID;
    LSBundleData _bundleData;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(BOOL)updateBundleRecord:(*id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 preferPlaceholder:(BOOL)arg1 ;
-(void)dealloc;
-(void)parseManagedPersonaIDs:(id)arg0 containsSystemPersona:(BOOL)arg1 ;
-(void)parsePlaceholderMetadata:(id)arg0 ;
-(void)parseSINFDictionary:(id)arg0 ;
-(void)parseiTunesMetadata:(id)arg0 ;


@end


#endif