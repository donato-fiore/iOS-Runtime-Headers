typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>>;

typedef struct __tree<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>, std::allocator<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>> __pair3_;
} __tree<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>, std::allocator<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>>;

typedef struct map<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>, std::less<States>, std::allocator<std::pair<const States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> {
    __tree<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::__map_value_compare<States, std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>, std::less<States>, true>, std::allocator<std::__value_type<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> __tree_;
} map<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>, std::less<States>, std::allocator<std::pair<const States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>>;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<void (States, States, Triggers)> {
    type __buf_;
    void __f_;
} __value_func<void (States, States, Triggers)>;

typedef struct function<void (States, States, Triggers)> {
    __value_func<void (States, States, Triggers)> __f_;
} function<void (States, States, Triggers)>;

typedef struct Fsm<States, States::Idle, Triggers> {
    map<States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>, std::less<States>, std::allocator<std::pair<const States, std::vector<FSM::Fsm<States, States::Idle, Triggers>::Trans>>>> transitionsMap;
    int currentState;
    function<void (States, States, Triggers)> _debug_fn;
} Fsm<States, States::Idle, Triggers>;

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

