// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTAINERNAMEDESCRIPTION_H
#define CNCONTAINERNAMEDESCRIPTION_H



#import "CNContainerPropertyDescription.h"

@interface CNContainerNameDescription : CNContainerPropertyDescription



-(BOOL)isNonnull;
-(BOOL)isWritable;
-(id)CNValueForContainer:(id)arg0 ;
-(id)key;
-(int)abPropertyID;
-(void)setCNValue:(id)arg0 onContainer:(id)arg1 ;


@end


#endif