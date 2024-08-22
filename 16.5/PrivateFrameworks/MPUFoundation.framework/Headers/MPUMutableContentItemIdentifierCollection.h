// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUMUTABLECONTENTITEMIDENTIFIERCOLLECTION_H
#define MPUMUTABLECONTENTITEMIDENTIFIERCOLLECTION_H



#import "MPUContentItemIdentifierCollection.h"

@interface MPUMutableContentItemIdentifierCollection : MPUContentItemIdentifierCollection

@property (nonatomic) NSUInteger itemType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setIdentifier:(id)arg0 forIdentifierType:(NSUInteger)arg1 ;


@end


#endif