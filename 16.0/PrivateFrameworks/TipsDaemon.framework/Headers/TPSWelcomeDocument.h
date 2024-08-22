// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSWELCOMEDOCUMENT_H
#define TPSWELCOMEDOCUMENT_H

@class TPSDocument, NSString;



@interface TPSWelcomeDocument : TPSDocument

@property (copy, nonatomic) NSString *majorVersion; // ivar: _majorVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif