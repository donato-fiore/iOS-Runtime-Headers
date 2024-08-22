// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RESECTIONDESCRIPTOR_H
#define _RESECTIONDESCRIPTOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _RESectionDescriptor : NSObject

@property (readonly, nonatomic) BOOL allowsSubsections; // ivar: _allowsSubsections
@property (readonly, nonatomic) BOOL invertRanking; // ivar: _invertRanking
@property (nonatomic) NSInteger maxElementCount; // ivar: _maxElementCount
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *rules; // ivar: _rules


-(id)initWithHistoricSectionDescriptor:(id)arg0 ;
-(id)initWithSectionDescriptor:(id)arg0 ;


@end


#endif