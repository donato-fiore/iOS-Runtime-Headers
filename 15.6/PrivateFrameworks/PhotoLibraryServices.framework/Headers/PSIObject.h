// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIOBJECT_H
#define PSIOBJECT_H

@class NSMutableDictionary, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSIObject : NSObject <NSCopying>

 {
    NSMutableDictionary *_synonymsByOriginalWord;
}


@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens
@property (copy, nonatomic, setter=setUUID:) NSString *uuid; // ivar: _uuid


-(id)_initForCopy:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForReverse;
-(id)initWithUUID:(id)arg0 ;
-(void)addContentString:(id)arg0 category:(short)arg1 owningCategory:(short)arg2 ;
-(void)addContentString:(id)arg0 identifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addIdentifier:(id)arg0 category:(short)arg1 owningCategory:(short)arg2 ;
-(void)addSynonym:(id)arg0 category:(short)arg1 originalContentString:(id)arg2 ;
-(void)addSynonym:(id)arg0 identifier:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)clear;
-(void)enumerateSynonymsForOriginalContentString:(id)arg0 handler:(id)arg1 ;
-(void)reverse;


@end


#endif