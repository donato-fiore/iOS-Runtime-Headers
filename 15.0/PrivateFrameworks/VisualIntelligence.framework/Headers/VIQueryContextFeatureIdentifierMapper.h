// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIQUERYCONTEXTFEATUREIDENTIFIERMAPPER_H
#define VIQUERYCONTEXTFEATUREIDENTIFIERMAPPER_H

@class NSString;
@protocol VIQueryContextMapping;

#import <Foundation/Foundation.h>


@interface VIQueryContextFeatureIdentifierMapper : NSObject <VIQueryContextMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)updateBuilder:(id)arg0 withDictionary:(id)arg1 ;


@end


#endif