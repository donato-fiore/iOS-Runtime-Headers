// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSAVAILABLEAPPLICATIONSFORURLQUERY_H
#define _LSAVAILABLEAPPLICATIONSFORURLQUERY_H

@class LSQuery, NSURL;



@interface _LSAvailableApplicationsForURLQuery : LSQuery

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL


+(BOOL)supportsSecureCoding;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)yieldBundles:(*void)arg0 context:(struct LSContext *)arg1 block:(id)arg2 ;


@end


#endif