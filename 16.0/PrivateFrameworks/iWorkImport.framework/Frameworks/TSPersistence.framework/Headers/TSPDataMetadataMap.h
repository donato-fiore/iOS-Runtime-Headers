// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATAMETADATAMAP_H
#define TSPDATAMETADATAMAP_H

@class NSMutableDictionary;


#import "TSPObject.h"

@interface TSPDataMetadataMap : TSPObject {
    NSMutableDictionary *_identifierToDataMetadata;
}




-(id)dataMetadataForDataIdentifier:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)setDataMetadata:(id)arg0 forDataIdentifier:(NSInteger)arg1 ;


@end


#endif