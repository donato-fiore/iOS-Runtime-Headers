// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYCHRONICLEENTRY_H
#define BYCHRONICLEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion


-(BOOL)createdOnCurrentMajorVersion;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntry:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithProductVersion:(id)arg0 ;


@end


#endif