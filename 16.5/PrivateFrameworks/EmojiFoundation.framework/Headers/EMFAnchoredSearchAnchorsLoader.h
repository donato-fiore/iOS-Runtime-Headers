// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFANCHOREDSEARCHANCHORSLOADER_H
#define EMFANCHOREDSEARCHANCHORSLOADER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface EMFAnchoredSearchAnchorsLoader : NSObject

@property (readonly, nonatomic) NSArray *leftHandAnchors;
@property (readonly, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, nonatomic) NSArray *rightHandAnchors;


-(id)initWithLocaleIdentifier:(id)arg0 ;


@end


#endif