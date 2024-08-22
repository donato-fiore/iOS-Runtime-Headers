// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLPOIENTRY_H
#define NLPOIENTRY_H

@class NSString;
@protocol NLParsecNamedEntity;

#import <Foundation/Foundation.h>

#import "NLPOIEntryImpl.h"

@interface NLPOIEntry : NSObject <NLParsecNamedEntity>

 {
    NLPOIEntryImpl *m_impl;
}


@property (readonly, nonatomic) unsigned char category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float score;
@property (readonly) Class superclass;


-(id)initWithProtoBuf:(id)arg0 ;
-(void)dealloc;


@end


#endif