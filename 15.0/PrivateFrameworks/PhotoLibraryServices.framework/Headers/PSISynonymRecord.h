// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSISYNONYMRECORD_H
#define PSISYNONYMRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PSISynonymRecord : NSObject

@property (nonatomic) short category; // ivar: _category
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *synonym; // ivar: _synonym


-(id)initWithSynonym:(id)arg0 category:(short)arg1 identifier:(id)arg2 ;


@end


#endif