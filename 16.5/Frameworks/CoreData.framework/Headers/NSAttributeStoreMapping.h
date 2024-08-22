// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSATTRIBUTESTOREMAPPING_H
#define NSATTRIBUTESTOREMAPPING_H



#import "NSPropertyStoreMapping.h"

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)attribute;
-(id)initWithProperty:(id)arg0 ;
-(id)sqlType;
-(int)externalType;
-(void)setExternalType:(int)arg0 ;


@end


#endif