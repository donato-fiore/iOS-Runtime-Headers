// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREERRORLAYERGROUP_H
#define SUCOREERRORLAYERGROUP_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SUCoreErrorLayerGroup : NSObject

@property (readonly, retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSInteger errorLayer; // ivar: _errorLayer
@property (nonatomic) NSInteger indications; // ivar: _indications
@property (retain, nonatomic) NSString *keyMatchTrue; // ivar: _keyMatchTrue
@property (retain, nonatomic) NSDictionary *keyMatchTrueMap; // ivar: _keyMatchTrueMap
@property (readonly, nonatomic) NSInteger maxCode; // ivar: _maxCode
@property (readonly, nonatomic) NSInteger minCode; // ivar: _minCode


-(id)description;
-(id)initForLayer:(NSInteger)arg0 withDomain:(id)arg1 ;
-(id)initForLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 ;
-(id)initForLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 indicating:(NSInteger)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6 ;
-(id)summary;


@end


#endif