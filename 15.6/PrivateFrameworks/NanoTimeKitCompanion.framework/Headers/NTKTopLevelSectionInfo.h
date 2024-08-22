// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKTOPLEVELSECTIONINFO_H
#define NTKTOPLEVELSECTIONINFO_H

@class NSString;
@protocol NTKComplicationSectionInfo, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKTopLevelSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *ntk_identifier; // ivar: _ntk_identifier
@property (copy, nonatomic) NSString *ntk_localizedSectionName; // ivar: _ntk_localizedSectionName
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 localizedSectionName:(id)arg1 ;


@end


#endif