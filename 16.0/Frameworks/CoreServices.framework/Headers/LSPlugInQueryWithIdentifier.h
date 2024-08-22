// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSPLUGINQUERYWITHIDENTIFIER_H
#define LSPLUGINQUERYWITHIDENTIFIER_H

@class NSString;


#import "LSPlugInQuery.h"

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery {
    int _bindingMap;
    NSString *_identifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isBindingMapValid;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_identifier;
-(id)_initWithIdentifier:(id)arg0 inMap:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif