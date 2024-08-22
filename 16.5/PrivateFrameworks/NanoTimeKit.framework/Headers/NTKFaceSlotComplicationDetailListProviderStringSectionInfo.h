// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACESLOTCOMPLICATIONDETAILLISTPROVIDERSTRINGSECTIONINFO_H
#define NTKFACESLOTCOMPLICATIONDETAILLISTPROVIDERSTRINGSECTIONINFO_H

@class NSString;
@protocol NTKComplicationSectionInfo, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKFaceSlotComplicationDetailListProviderStringSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *ntk_identifier;
@property (readonly, copy, nonatomic) NSString *ntk_localizedSectionName;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGroupName:(id)arg0 ;


@end


#endif