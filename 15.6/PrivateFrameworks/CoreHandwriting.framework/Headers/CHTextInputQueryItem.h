// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTEXTINPUTQUERYITEM_H
#define CHTEXTINPUTQUERYITEM_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "CHTextCorrectionResult.h"

@interface CHTextInputQueryItem : NSObject

@property (readonly, nonatomic) CHTextCorrectionResult *correctionResult; // ivar: _correctionResult
@property (readonly, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSNumber *itemStableIdentifier; // ivar: _itemStableIdentifier
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers; // ivar: _strokeIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextInputQueryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 stableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 correctionResult:(id)arg3 ;


@end


#endif