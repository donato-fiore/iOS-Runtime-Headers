// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISRECORDRESOURCEPROVIDER_H
#define ISRECORDRESOURCEPROVIDER_H

@class NSString, LSRecord;


#import "ISResourceProvider.h"

@interface ISRecordResourceProvider : ISResourceProvider

@property (retain) NSString *fileExtension; // ivar: _fileExtension
@property (readonly) LSRecord *record; // ivar: _record
@property (retain) NSString *templateType; // ivar: _templateType


-(BOOL)_isAppleResource;
-(BOOL)onlySupportsGraphicIcons;
-(BOOL)supportsGraphicIcons;
-(NSUInteger)iconShape;
-(id)customRecipe;
-(id)iconResource;
-(id)initWithRecord:(id)arg0 options:(NSUInteger)arg1 ;
-(id)resourceNamed:(id)arg0 ;
-(id)symbol;
-(id)templateIconResource;
-(void)resolveResources;


@end


#endif