// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGAMEHIGHLIGHTINTERNAL_H
#define GKGAMEHIGHLIGHTINTERNAL_H

@class NSNumber, ASCArtwork, NSString;


#import "GKInternalRepresentation.h"

@interface GKGameHighlightInternal : GKInternalRepresentation

@property (nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) ASCArtwork *artwork; // ivar: _artwork
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)secureCodedPropertyKeys;


@end


#endif