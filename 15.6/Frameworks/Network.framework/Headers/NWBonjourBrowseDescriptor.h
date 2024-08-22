// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWBONJOURBROWSEDESCRIPTOR_H
#define NWBONJOURBROWSEDESCRIPTOR_H

@class NSString;


#import "NWBrowseDescriptor.h"

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *type;


+(id)descriptorWithType:(id)arg0 domain:(id)arg1 ;
+(unsigned int)descriptorType;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;


@end


#endif