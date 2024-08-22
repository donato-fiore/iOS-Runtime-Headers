// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRICLIENTFACTORPACKSTREAMINGPARSER_H
#define TRICLIENTFACTORPACKSTREAMINGPARSER_H

@class NSString, TRIClientSelectedNamespace, NSData;

#import <Foundation/Foundation.h>


@interface TRIClientFactorPackStreamingParser : NSObject {
    NSString *_factorPackId;
    TRIClientSelectedNamespace *_selectedNamespace;
    BOOL _emittedUnrecognizedFieldWarning;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) BOOL hasFactorPackId;
@property (readonly, nonatomic) BOOL hasSelectedNamespace;
@property (readonly, nonatomic) TRIClientSelectedNamespace *selectedNamespace;


-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(unsigned int)_fieldTagForFieldName:(id)arg0 ;
-(void)_parseWithHandleFactorLevel:(id)arg0 ;
-(void)enumerateFactorLevelsWithBlock:(id)arg0 ;


@end


#endif