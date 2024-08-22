// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFSEARCHABLEINDEXOBJECTPROPERTYMAPPER_H
#define EFSEARCHABLEINDEXOBJECTPROPERTYMAPPER_H

@class NSArray, NSDictionary, NSString;
@protocol EFObjectPropertyMapper;

#import <Foundation/Foundation.h>


@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper>



@property (readonly, nonatomic) NSArray *attributes; // ivar: _attributes
@property (copy, nonatomic) NSDictionary *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)childForKey:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithChildren:(id)arg0 ;
-(id)initWithChildren:(id)arg0 attributes:(id)arg1 ;


@end


#endif