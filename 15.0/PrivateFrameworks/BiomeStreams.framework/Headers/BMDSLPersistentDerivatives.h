// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLPERSISTENTDERIVATIVES_H
#define BMDSLPERSISTENTDERIVATIVES_H

@class BMDSL, NSString, NSURL;



@interface BMDSLPersistentDerivatives : BMDSL

@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpstream:(id)arg0 databaseURL:(id)arg1 derivedTableName:(id)arg2 ;
-(id)initWithUpstream:(id)arg0 databaseURL:(id)arg1 derivedTableName:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif