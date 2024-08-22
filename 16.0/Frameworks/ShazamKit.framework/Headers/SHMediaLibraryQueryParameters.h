// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIALIBRARYQUERYPARAMETERS_H
#define SHMEDIALIBRARYQUERYPARAMETERS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SHMediaLibraryQueryParameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSUInteger filterOptions; // ivar: _filterOptions
@property (copy, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly, nonatomic) NSInteger resultsLimit; // ivar: _resultsLimit


+(BOOL)supportsSecureCoding;
+(id)defaultParameters;
-(BOOL)validateLimit:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultsLimit:(NSInteger)arg0 ;
-(id)initWithResultsLimit:(NSInteger)arg0 filterOptions:(NSUInteger)arg1 ;
-(id)initWithResultsLimit:(NSInteger)arg0 filterOptions:(NSUInteger)arg1 ascending:(BOOL)arg2 ;
-(id)initWithResultsLimit:(NSInteger)arg0 filterOptions:(NSUInteger)arg1 ascending:(BOOL)arg2 providerIdentifier:(id)arg3 ;
-(void)commonInitWithResultsLimit:(NSInteger)arg0 filterOptions:(NSUInteger)arg1 ascending:(BOOL)arg2 providerIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif